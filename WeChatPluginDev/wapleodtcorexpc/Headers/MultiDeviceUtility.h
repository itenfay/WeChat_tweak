//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MultiDeviceUtility : NSObject
{
}

+ (id)generateCheckboxWithSideLength:(double)arg1 selectedColor:(id)arg2;
+ (id)generateKidsWatchCheckbox;
+ (_Bool)enableLocalSyncChatForIconType:(unsigned int)arg1 clientVersion:(unsigned int)arg2;
+ (id)defaultTitleForIconType:(unsigned int)arg1;
+ (id)generateLargeIconFromType:(unsigned int)arg1;
+ (id)svgIconNameFromType:(unsigned int)arg1 isLocked:(_Bool)arg2;
+ (id)svgLargeIconNameFromType:(unsigned int)arg1;

@end

