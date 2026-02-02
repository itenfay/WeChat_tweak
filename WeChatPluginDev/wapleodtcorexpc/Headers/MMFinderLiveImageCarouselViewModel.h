//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveImageCarouselViewModel : NSObject
{
    _Bool _isLocal;
    _Bool _isShowForClearScreen;
    NSString *_imageUrl;
    NSString *_imageName;
    double _scrollTimeInterval;
    double _cellWidth;
}

+ (Class)cellClass;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double scrollTimeInterval; // @synthesize scrollTimeInterval=_scrollTimeInterval;
@property(nonatomic) _Bool isShowForClearScreen; // @synthesize isShowForClearScreen=_isShowForClearScreen;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;

@end

