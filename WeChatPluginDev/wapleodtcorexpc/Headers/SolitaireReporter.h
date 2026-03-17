//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SolitaireReporter : NSObject
{
}

+ (void)reportExpandSolitaire:(id)arg1;
+ (void)reportDeleteExistWithSolitaire:(id)arg1 InfoObj:(id)arg2;
+ (void)reportCommonClickWithSolitaire:(id)arg1 ClickType:(unsigned long long)arg2 ExpandType:(unsigned long long)arg3;
+ (void)reportClickWithSolitaire:(id)arg1 ClickType:(unsigned long long)arg2 SourceType:(unsigned long long)arg3;
+ (void)reportTipsShowWithSolitaire:(id)arg1;
+ (void)reportFormatInputEnterWithSolitaire:(id)arg1 EnterScene:(unsigned long long)arg2 ExitType:(unsigned long long)arg3;
+ (void)reportDropSolitaire:(id)arg1 Reason:(unsigned long long)arg2;
+ (void)reportJoinSolitaire:(id)arg1 NewSolitaire:(id)arg2;
+ (void)reportActiveWithSolitaire:(id)arg1 FromUser:(id)arg2;

@end

