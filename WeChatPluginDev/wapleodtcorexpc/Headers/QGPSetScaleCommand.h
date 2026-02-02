//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QGPSetScaleParam;

@interface QGPSetScaleCommand : NSObject
{
    QGPSetScaleParam *_params;
}

@property(retain, nonatomic) QGPSetScaleParam *params; // @synthesize params=_params;

@end

