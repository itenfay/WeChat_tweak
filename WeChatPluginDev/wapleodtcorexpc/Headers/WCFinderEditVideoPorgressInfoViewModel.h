//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCFinderEditVideoPorgressInfoViewModel : NSObject
{
    _Bool _isLoadingImg;
    NSMutableArray *_countNums;
    NSMutableArray *_assets;
    NSMutableArray *_thumbImages;
}

+ (unsigned long long)countOfThumePerSecond;
+ (id)viewModelWithAssets:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *thumbImages; // @synthesize thumbImages=_thumbImages;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(nonatomic) _Bool isLoadingImg; // @synthesize isLoadingImg=_isLoadingImg;
@property(retain, nonatomic) NSMutableArray *countNums; // @synthesize countNums=_countNums;
- (void)genThumbImagesWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getImgCount;
- (id)initWithAssets:(id)arg1;

@end

