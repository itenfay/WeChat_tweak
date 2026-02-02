//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WAMediaCastingRoutePickerRencentDevicePool : NSObject
{
    NSArray *_lastConnectedDeviceList;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *lastConnectedDeviceList; // @synthesize lastConnectedDeviceList=_lastConnectedDeviceList;
- (id)recoverFromDisk;
- (void)saveToDisk;
- (void)appendDevice:(id)arg1;

@end

