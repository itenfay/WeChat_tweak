//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdRandomPickCardPickedCardInfo : NSObject
{
    NSString *_cardId;
    unsigned long long _timestamp;
}

+ (void)initialize;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_cardId;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

