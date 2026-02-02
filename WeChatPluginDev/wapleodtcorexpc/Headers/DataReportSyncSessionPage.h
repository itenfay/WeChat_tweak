//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DataReportSyncSessionPage : NSObject
{
    unsigned long long _pageHash;
    NSString *_pageId;
    NSString *_sourceViewId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceViewId; // @synthesize sourceViewId=_sourceViewId;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(nonatomic) unsigned long long pageHash; // @synthesize pageHash=_pageHash;
- (id)toString;
- (_Bool)isEqualObject:(id)arg1;

@end

