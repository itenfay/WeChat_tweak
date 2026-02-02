//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCanvasLoadParams;

@interface WCAdDynamicCanvasServerData : NSObject
{
    NSString *_adCanvasXml;
    NSString *_dynamicCanvasData;
    unsigned long long _cacheTime;
    WCAdCanvasLoadParams *_loadParams;
}

+ (id)fromPBCodingBuffer:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_dynamicCanvasData;
+ (void)PBArrayAdd_adCanvasXml;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCanvasLoadParams *loadParams; // @synthesize loadParams=_loadParams;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(retain, nonatomic) NSString *dynamicCanvasData; // @synthesize dynamicCanvasData=_dynamicCanvasData;
@property(retain, nonatomic) NSString *adCanvasXml; // @synthesize adCanvasXml=_adCanvasXml;
- (_Bool)isValid;
- (id)toPBCodingBuffer;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

