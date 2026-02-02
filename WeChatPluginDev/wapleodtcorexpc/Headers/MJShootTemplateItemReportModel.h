//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMCameraTemplateItem;

@interface MJShootTemplateItemReportModel : NSObject
{
    unsigned long long _tabID;
    unsigned long long _position;
    MMCameraTemplateItem *_templateItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCameraTemplateItem *templateItem; // @synthesize templateItem=_templateItem;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long tabID; // @synthesize tabID=_tabID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

