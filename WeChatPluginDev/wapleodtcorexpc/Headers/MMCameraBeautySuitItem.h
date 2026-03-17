//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface MMCameraBeautySuitItem : NSObject
{
    unsigned long long _type;
    NSString *_cameraSceneTitle;
    CDUnknownBlockType _beautyDescriptorFactory;
}

+ (id)highItem;
+ (id)mediumItem;
+ (id)lowItem;
+ (id)offItem;
@property(copy, nonatomic) CDUnknownBlockType beautyDescriptorFactory; // @synthesize beautyDescriptorFactory=_beautyDescriptorFactory;
@property(retain, nonatomic) NSString *cameraSceneTitle; // @synthesize cameraSceneTitle=_cameraSceneTitle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)genOMJBeautyDesc;

@end
