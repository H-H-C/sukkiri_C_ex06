#include <stdio.h>

typedef char String[1024];

int main(void)
{
  typedef struct
  {
    String name;
    int hp;
    int attack;
  } Monster;

  Monster seiryu = {"青龍", 100, 30};
  Monster suzaku = {"朱雀", 130, 50};
  Monster byakko = {"白虎", 120, 80};
  Monster genbu = {"玄武", 160, 90};

  const String TEMPLATE = "%s : HP=%3d 攻撃力=%2d\n";
  printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);
  printf(TEMPLATE, suzaku.name, suzaku.hp, suzaku.attack);
  printf(TEMPLATE, byakko.name, byakko.hp, byakko.attack);
  printf(TEMPLATE, genbu.name, genbu.hp, genbu.attack);

  return 0;
}