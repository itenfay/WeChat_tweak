//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMomentsSpringUtilities : NSObject
{
}

+ (void)printLiveShareItem:(id)arg1;
+ (void)printFinderShareItem:(id)arg1;
+ (void)customizeSpringActionItemView:(id)arg1 forActionSheetItem:(id)arg2;
+ (id)createSpringActionSheetItem;
+ (id)springActionSheetItemTitle;
+ (_Bool)openSpringSourceWithDataItem:(id)arg1 urlString:(id)arg2;
+ (_Bool)canDisplaySpringSourceForDataItem:(id)arg1;
+ (_Bool)canEnterFinderLiveUsingFinderUsernameModeWithShareItem:(id)arg1;
+ (_Bool)canEnterFinderLiveUsingLiveInfoModeWithShareItem:(id)arg1;
+ (id)getLiveShareItemThatDisplaysSpringSourceForDataItem:(id)arg1 enterLiveMode:(long long)arg2;
+ (id)getLiveShareItemThatDisplaysSpringSourceForDataItem:(id)arg1;
+ (_Bool)canDisplaySpringStyleForCommentText:(id)arg1 inDataItem:(id)arg2;
+ (_Bool)canDisplaySpringStyleForComment:(id)arg1 inDataItem:(id)arg2;
+ (_Bool)canDisplaySpringStyleForCommentsInDataItem:(id)arg1;
+ (_Bool)canDisplaySpringStyleForDataItem:(id)arg1;
+ (_Bool)canPostSpringFeed:(id)arg1 maxImageCount:(unsigned long long)arg2 selectedSightDraft:(id)arg3 inputText:(id)arg4;
+ (_Bool)canPostSpringText:(id)arg1;
+ (id)stringByRemovingFirstSpacesInString:(id)arg1;
+ (id)stringByRemovingLinesInString:(id)arg1;
+ (void)fixTextForSpringTextView:(id)arg1 croppedText:(_Bool *)arg2;
+ (unsigned long long)lengthOfSpringText:(id)arg1;

@end

