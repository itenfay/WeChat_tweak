//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCBrandWebUiUtil : NSObject
{
}

+ (_Bool)isInFullScreenUrlPrefixList:(id)arg1;
+ (_Bool)canShowFullScreen:(unsigned int)arg1 andUrl:(id)arg2;
+ (id)genMMWebPresetUIWithItemShowType:(unsigned int)arg1 andUrl:(id)arg2;
+ (id)genMMWebPresetUIWithUrl:(id)arg1;
+ (id)genMMWebPresetUIFromFavAppShareItem:(id)arg1 andUrl:(id)arg2;
+ (id)genMMWebPresetUIFromWCTimelineAppShareItem:(id)arg1 andUrl:(id)arg2;
+ (id)genMMWebPresetUIFromMsgAppShareItem:(id)arg1 andUrl:(id)arg2;

@end

