//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SearchCgiGuideConfig : NSObject
{
    NSString *_vertTitle;
    NSMutableArray *_arrVertEntryData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrVertEntryData; // @synthesize arrVertEntryData=_arrVertEntryData;
@property(retain, nonatomic) NSString *vertTitle; // @synthesize vertTitle=_vertTitle;
- (id)getTitleForBusinessType:(unsigned long long)arg1;

@end

