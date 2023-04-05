union Coins change;
for(int i = 0; i < sizeof(change) / sizeof(int); ++i)
{
	scanf("%i", change.coins + 1);
}
printf("There are %i quarters, %i dimes, %i nickels, and %i pennies\n",
		change.quarter, change.dime, change.nickel, change.penny);

