//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCVideoProducerBaseSheetViewConfig : NSObject
{
    _Bool _isTopViewEnabled;
    _Bool _isBottomViewEnabled;
    double _topViewHeight;
    NSString *_topViewTitle;
    double _bottomViewHeight;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) double bottomViewHeight; // @synthesize bottomViewHeight=_bottomViewHeight;
@property(nonatomic) _Bool isBottomViewEnabled; // @synthesize isBottomViewEnabled=_isBottomViewEnabled;
@property(retain, nonatomic) NSString *topViewTitle; // @synthesize topViewTitle=_topViewTitle;
@property(nonatomic) double topViewHeight; // @synthesize topViewHeight=_topViewHeight;
@property(nonatomic) _Bool isTopViewEnabled; // @synthesize isTopViewEnabled=_isTopViewEnabled;

@end

