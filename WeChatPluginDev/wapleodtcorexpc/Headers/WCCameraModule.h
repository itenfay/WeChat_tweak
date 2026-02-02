//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject;
@protocol WCCameraModuleDelegate;

@interface WCCameraModule
{
    long long _scene;
    id <WCCameraModuleDelegate> _delegate;
    NSObject *_userData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *userData; // @synthesize userData=_userData;
@property(nonatomic) __weak id <WCCameraModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long scene; // @synthesize scene=_scene;

@end

