//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EnterpriseBrandAttr;

@interface EnterpriseBrandAttrCacheItem
{
    unsigned int _updateTime;
    EnterpriseBrandAttr *_attr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) EnterpriseBrandAttr *attr; // @synthesize attr=_attr;

@end

