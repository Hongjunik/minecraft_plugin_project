#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // 랜덤 시드 초기화 (매번 다른 결과)

    int reels[3];  // 슬롯머신 3개의 릴
    const char *symbols[] = {"🍒", "⭐", "🔔", "💎", "7️⃣"};
    int numSymbols = sizeof(symbols) / sizeof(symbols[0]);

    printf("🎰 슬롯머신을 돌립니다...\n");
    for (int i = 0; i < 3; i++) {
        reels[i] = rand() % numSymbols;  // 0~4 중 하나
        printf("[%s] ", symbols[reels[i]]);
    }

    // 결과 판단
    if (reels[0] == reels[1] && reels[1] == reels[2]) {
        printf("\n🎉 잭팟! 세 개가 일치했습니다!\n");
    } else if (reels[0] == reels[1] || reels[1] == reels[2] || reels[0] == reels[2]) {
        printf("\n✨ 두 개가 일치했습니다! 보너스!\n");
    } else {
        printf("\n😢 아쉽네요, 다시 도전!\n");
    }

    return 0;
}
