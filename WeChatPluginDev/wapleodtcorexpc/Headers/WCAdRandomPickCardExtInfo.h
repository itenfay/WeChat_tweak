//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdRandomPickCardExtInfo : NSObject
{
    NSString *_cardDynamicInfo;
    NSString *_redPacketCoverUrl;
}

+ (id)fromResponseExtInfo:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_redPacketCoverUrl;
+ (void)PBArrayAdd_cardDynamicInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *redPacketCoverUrl; // @synthesize redPacketCoverUrl=_redPacketCoverUrl;
@property(retain, nonatomic) NSString *cardDynamicInfo; // @synthesize cardDynamicInfo=_cardDynamicInfo;
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

