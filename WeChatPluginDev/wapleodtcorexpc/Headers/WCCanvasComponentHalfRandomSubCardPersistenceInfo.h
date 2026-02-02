//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCCanvasComponentHalfRandomSubCardPersistenceInfo
{
    NSString *_redPacketCoverUrl;
    NSMutableDictionary *_sendBulletComments;
}

+ (void)initialize;
+ (void)PBArrayAdd_sendBulletComments;
+ (void)PBArrayAdd_redPacketCoverUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sendBulletComments; // @synthesize sendBulletComments=_sendBulletComments;
@property(retain, nonatomic) NSString *redPacketCoverUrl; // @synthesize redPacketCoverUrl=_redPacketCoverUrl;
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

