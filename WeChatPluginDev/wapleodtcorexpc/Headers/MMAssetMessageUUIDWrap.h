//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMAssetMessageUUIDWrap : NSObject
{
    NSString *_assetID;
    NSString *_messageUUID;
}

+ (void)initialize;
+ (void)PBArrayAdd_messageUUID;
+ (void)PBArrayAdd_assetID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(retain, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

