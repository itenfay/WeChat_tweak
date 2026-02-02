//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class MMUIViewController, NSString;

@interface OpenIMContactInfoForThirdReqFetchContext : NSObject
{
    unsigned int _scene;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _failBlock;
    NSString *_dataUrl;
    MMUIViewController *_viewController;
    NSString *_multiUserQRCode;
}

@property(retain, nonatomic) NSString *multiUserQRCode; // @synthesize multiUserQRCode=_multiUserQRCode;
@property(retain, nonatomic) MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;

@end
