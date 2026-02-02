//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveCdnStreamInfo, NSString;

@interface MMFinderLiveChooseClarityDataItem : NSObject
{
    _Bool _isSelect;
    _Bool _isDefault;
    MMLiveCdnStreamInfo *_streamInfo;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) MMLiveCdnStreamInfo *streamInfo; // @synthesize streamInfo=_streamInfo;

@end

