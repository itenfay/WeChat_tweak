//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface QMapStyleData : NSObject
{
    _Bool _mapStyleEnabled;
    NSArray *_styleList;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *styleList; // @synthesize styleList=_styleList;
@property(readonly, nonatomic) _Bool mapStyleEnabled; // @synthesize mapStyleEnabled=_mapStyleEnabled;
- (id)initWithJSON:(id)arg1;

@end

