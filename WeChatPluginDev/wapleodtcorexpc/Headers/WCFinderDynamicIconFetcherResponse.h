//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, UIImage;

@interface WCFinderDynamicIconFetcherResponse : NSObject
{
    _Bool _filled;
    UIImage *_cacheImage;
    NSMutableArray *_updateBlocks;
}

+ (id)responseWithImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(nonatomic) _Bool filled; // @synthesize filled=_filled;
@property(retain, nonatomic) UIImage *cacheImage; // @synthesize cacheImage=_cacheImage;
- (void)addUpdateBlock:(CDUnknownBlockType)arg1;
- (void)notify:(id)arg1;
- (void)cancel;

@end

