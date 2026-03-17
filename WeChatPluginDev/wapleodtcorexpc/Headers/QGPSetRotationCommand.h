//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QGPRotation;

@interface QGPSetRotationCommand : NSObject
{
    QGPRotation *_params;
}

@property(retain, nonatomic) QGPRotation *params; // @synthesize params=_params;

@end

