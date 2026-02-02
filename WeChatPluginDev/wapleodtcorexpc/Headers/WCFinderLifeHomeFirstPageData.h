//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface WCFinderLifeHomeFirstPageData : NSObject
{
    NSMutableArray *_pages;
    NSArray *_rootTags;
    long long _defaultSelectedIdx;
    unsigned long long _extFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long extFlag; // @synthesize extFlag=_extFlag;
@property(nonatomic) long long defaultSelectedIdx; // @synthesize defaultSelectedIdx=_defaultSelectedIdx;
@property(retain, nonatomic) NSArray *rootTags; // @synthesize rootTags=_rootTags;
@property(retain, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;

@end

