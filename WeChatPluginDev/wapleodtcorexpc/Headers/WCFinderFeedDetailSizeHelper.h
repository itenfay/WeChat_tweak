//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderFeedDetailSizeHelper : NSObject
{
}

+ (_Bool)isVideoMedia:(id)arg1;
+ (double)whRatioWithMediaInfo:(id)arg1 enableClip:(_Bool)arg2;
+ (double)normalMediaContentHeightWithDataItem:(id)arg1 width:(double)arg2;
+ (struct CGSize)mediaActualSizeWithMediaInfo:(id)arg1 limitSize:(struct CGSize)arg2 enableClip:(_Bool)arg3;

@end

