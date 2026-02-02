//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveStandardTextStickerImageProvider : NSObject
{
    double _maximumWidth;
    unsigned long long _maximumWidthInFullWidthCharacters;
}

@property(nonatomic) unsigned long long maximumWidthInFullWidthCharacters; // @synthesize maximumWidthInFullWidthCharacters=_maximumWidthInFullWidthCharacters;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
- (void)createImageWithStickerItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

