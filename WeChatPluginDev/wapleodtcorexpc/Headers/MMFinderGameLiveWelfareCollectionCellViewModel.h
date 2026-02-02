//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderGameLiveWelfareCollectionCellViewModel : NSObject
{
    _Bool _showDegreeOfCompletion;
    _Bool _needShow;
    _Bool _isUseLocalPic;
    NSString *_taskDesc;
    double _degreeOfCompletion;
    NSString *_imageUrl;
    double _cellWidth;
    NSString *_reportExtInfoJson;
}

+ (Class)cellClass;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool isUseLocalPic; // @synthesize isUseLocalPic=_isUseLocalPic;
@property(retain, nonatomic) NSString *reportExtInfoJson; // @synthesize reportExtInfoJson=_reportExtInfoJson;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic, getter=isNeedShow) _Bool needShow; // @synthesize needShow=_needShow;
@property(nonatomic) double degreeOfCompletion; // @synthesize degreeOfCompletion=_degreeOfCompletion;
@property(nonatomic, getter=isShowDegreeOfCompletion) _Bool showDegreeOfCompletion; // @synthesize showDegreeOfCompletion=_showDegreeOfCompletion;
@property(retain, nonatomic) NSString *taskDesc; // @synthesize taskDesc=_taskDesc;
- (void)calculateCellWidth;

@end

