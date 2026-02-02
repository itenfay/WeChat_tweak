//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOrderDetailNormalCellInfo : NSObject
{
    NSString *m_nsKey;
    NSString *m_nsValue;
    NSString *m_nsJumpedUrl;
    unsigned int m_uiJumpedType;
    _Bool m_bIsSegmentationCell;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiJumpedType; // @synthesize m_uiJumpedType;
@property(retain, nonatomic) NSString *m_nsValue; // @synthesize m_nsValue;
@property(retain, nonatomic) NSString *m_nsKey; // @synthesize m_nsKey;
@property(retain, nonatomic) NSString *m_nsJumpedUrl; // @synthesize m_nsJumpedUrl;
@property(nonatomic) _Bool m_bIsSegmentationCell; // @synthesize m_bIsSegmentationCell;

@end

