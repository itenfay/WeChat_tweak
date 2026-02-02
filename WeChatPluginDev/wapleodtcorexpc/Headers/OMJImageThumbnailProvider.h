//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIImage;

@interface OMJImageThumbnailProvider : NSObject
{
    struct XPath _imageFilePath;
    unsigned long long _state;
    NSMutableDictionary *_resultHandlersByTaskID;
    UIImage *_thumbnailImage;
    struct CGSize _maxPixelSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize maxPixelSize; // @synthesize maxPixelSize=_maxPixelSize;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain) NSMutableDictionary *resultHandlersByTaskID; // @synthesize resultHandlersByTaskID=_resultHandlersByTaskID;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)cancelAllTasks;
- (void)cancelTask:(long long)arg1;
- (void)notifyDidCompleteDecodingImage:(SharedPtr_db4ce4f7)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (long long)requestThumbnailAtTimeRange:(CDStruct_e83c9415)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (long long)requestThumbnailAtTime:(CDStruct_1b6d18a9)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithImageFileClip:(SharedPtr_50463839)arg1 maxPixelSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

