//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayOfflinePayCardList : NSObject
{
    NSArray *_cardList;
}

+ (void)initialize;
+ (void)PBArrayAdd_cardList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

