//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIImage;

@interface WCBizMultiImageBrowseData : NSObject
{
    NSArray *m_arrBrowseImgItem;
    unsigned int m_uiStartIndex;
    UIImage *m_oWaitBackGroundImg;
    _Bool m_bCached;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *m_oWaitBackGroundImg; // @synthesize m_oWaitBackGroundImg;
@property(nonatomic) unsigned int m_uiStartIndex; // @synthesize m_uiStartIndex;
@property(nonatomic) _Bool m_bCached; // @synthesize m_bCached;
@property(retain, nonatomic) NSArray *m_arrBrowseImgItem; // @synthesize m_arrBrowseImgItem;
- (void)dealloc;

@end

