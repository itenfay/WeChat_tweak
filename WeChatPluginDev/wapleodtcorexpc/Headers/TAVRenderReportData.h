//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TAVRenderReportData : NSObject
{
    long long _renderTime;
    double _renderCostTime;
    long long _decodeTime;
    double _decodeCostTime;
    long long _decodeSuccessTime;
    struct CGSize _renderSize;
}

@property(nonatomic) long long decodeSuccessTime; // @synthesize decodeSuccessTime=_decodeSuccessTime;
@property(nonatomic) double decodeCostTime; // @synthesize decodeCostTime=_decodeCostTime;
@property(nonatomic) long long decodeTime; // @synthesize decodeTime=_decodeTime;
@property(nonatomic) double renderCostTime; // @synthesize renderCostTime=_renderCostTime;
@property(nonatomic) long long renderTime; // @synthesize renderTime=_renderTime;
@property(nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;

@end

