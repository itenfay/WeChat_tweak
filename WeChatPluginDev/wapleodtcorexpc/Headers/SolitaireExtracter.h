//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SolitaireExtracter : NSObject
{
}

+ (id)getArrSolitaireContentWithText:(id)arg1 Operation:(id)arg2 EmptyLineCount:(unsigned int *)arg3 ForFirstItem:(_Bool)arg4;
+ (id)getArrSolitaireContentWithText:(id)arg1 ForFirstItem:(_Bool)arg2;
+ (id)getArrSolitaireContentWithText:(id)arg1;
+ (id)extractSolitaireInfoWithAppmsg:(id)arg1;
+ (id)getSubStringWithContent:(id)arg1 range:(struct _NSRange)arg2;
+ (id)extractSolitaireContent:(id)arg1 SolitaireHeader:(id)arg2 SolitaireTail:(id)arg3;
+ (void)extractSolitaireExampleWithText:(id)arg1 Header:(id *)arg2 Example:(id *)arg3;
+ (id)getSolitaireTailWithText:(id)arg1;
+ (id)getSolitaireInfoWithText:(id)arg1;
+ (id)getSolitaireInfoWithKeywordWithText:(id)arg1;
+ (id)getSolitaireHeaderWithText:(id)arg1 HasHeader:(_Bool *)arg2 Separator:(id *)arg3;

@end

