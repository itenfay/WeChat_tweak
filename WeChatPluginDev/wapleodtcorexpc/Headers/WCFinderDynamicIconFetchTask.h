//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, UIImage;

@interface WCFinderDynamicIconFetchTask : NSObject
{
    _Bool _filled;
    NSMutableArray *_callbackList;
    UIImage *_image;
}

+ (id)dynamicImageTaskWithDark:(id)arg1 light:(id)arg2;
+ (id)singleTask:(id)arg1;
+ (id)keyForDynamaicConfig:(id)arg1;
+ (id)keyForUrl:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool filled; // @synthesize filled=_filled;
@property(retain, nonatomic) NSMutableArray *callbackList; // @synthesize callbackList=_callbackList;
- (_Bool)isFinish;
- (void)addImageLoadCallback:(CDUnknownBlockType)arg1;

@end

