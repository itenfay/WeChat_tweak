//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QGPSetVisibleParam;

@interface QGPSetVisibleCommand : NSObject
{
    QGPSetVisibleParam *_params;
}

@property(retain, nonatomic) QGPSetVisibleParam *params; // @synthesize params=_params;

@end

