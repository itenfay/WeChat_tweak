//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MPFastLoadParam : NSObject
{
    _Bool _hasItemShowType;
    unsigned int _itemShowType;
    unsigned int _enterType;
    NSString *_urlForReport;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *urlForReport; // @synthesize urlForReport=_urlForReport;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
- (id)description;

@end

