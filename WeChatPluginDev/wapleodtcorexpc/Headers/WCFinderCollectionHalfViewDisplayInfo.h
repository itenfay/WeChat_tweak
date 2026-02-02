//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCollectionHalfViewDisplayInfo : NSObject
{
    _Bool _showCollectionDesc;
    NSString *_navTitle;
    NSString *_displayTitle;
    NSString *_displayEpisodeContent;
    NSString *_displayDescContent;
    NSString *_reportURL;
}

+ (id)displayInfoWithPaidCollection:(id)arg1;
+ (id)displayInfoWithCollecitonInfo:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reportURL; // @synthesize reportURL=_reportURL;
@property(copy, nonatomic) NSString *displayDescContent; // @synthesize displayDescContent=_displayDescContent;
@property(nonatomic) _Bool showCollectionDesc; // @synthesize showCollectionDesc=_showCollectionDesc;
@property(copy, nonatomic) NSString *displayEpisodeContent; // @synthesize displayEpisodeContent=_displayEpisodeContent;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;

@end

