//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UserGrantInterfaceBody_InterfaceBodyItem;

@interface MMAuthorizeGameInfoCellVM : NSObject
{
    _Bool _shouldShow;
    unsigned int _selectStatus;
    double _cellHeight;
    UserGrantInterfaceBody_InterfaceBodyItem *_bodyItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShow; // @synthesize shouldShow=_shouldShow;
@property(nonatomic) unsigned int selectStatus; // @synthesize selectStatus=_selectStatus;
@property(retain, nonatomic) UserGrantInterfaceBody_InterfaceBodyItem *bodyItem; // @synthesize bodyItem=_bodyItem;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void)calCellHeight;
- (void)prepareDataForUse;

@end

