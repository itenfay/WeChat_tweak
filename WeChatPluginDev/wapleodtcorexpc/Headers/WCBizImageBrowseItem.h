//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, UIImage;

@interface WCBizImageBrowseItem : NSObject
{
    NSString *m_nsImgUrl;
    UIImage *m_nsThumbImage;
    NSData *m_ndImgData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *m_nsThumbImage; // @synthesize m_nsThumbImage;
@property(retain, nonatomic) NSString *m_nsImgUrl; // @synthesize m_nsImgUrl;
@property(retain, nonatomic) NSData *m_ndImgData; // @synthesize m_ndImgData;
- (void)dealloc;

@end

