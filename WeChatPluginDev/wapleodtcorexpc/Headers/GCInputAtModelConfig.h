//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGrowTextView, NSString;

@interface GCInputAtModelConfig : NSObject
{
    unsigned int _pageLimit;
    NSString *_contentId;
    MMGrowTextView *_growTextView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(nonatomic) unsigned int pageLimit; // @synthesize pageLimit=_pageLimit;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;

@end

