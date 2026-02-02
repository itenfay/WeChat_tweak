//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFileBrowseSectionInfo : NSObject
{
    NSMutableArray *_browseInfoArray;
    NSString *_sectionTitle;
    unsigned long long _beginTime;
    unsigned long long _endTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) NSMutableArray *browseInfoArray; // @synthesize browseInfoArray=_browseInfoArray;
- (id)description;
- (id)init;

@end

