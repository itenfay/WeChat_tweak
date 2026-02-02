//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MMFinderLiveConnectMicAnchorSectionInfo : NSObject
{
    _Bool _isExpand;
    _Bool _show;
    unsigned long long _type;
    NSMutableArray *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *headerTitle;
@property(readonly, nonatomic) NSString *expandCellTitle;
@property(readonly, nonatomic) NSArray *displayItems;
- (_Bool)showExpand;

@end

