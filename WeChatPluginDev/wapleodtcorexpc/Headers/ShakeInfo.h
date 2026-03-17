//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ShakeInfo : NSObject
{
    unsigned int m_uiShakeTimes;
    unsigned int m_uiBackGroundImgID;
}

@property(nonatomic) unsigned int m_uiBackGroundImgID; // @synthesize m_uiBackGroundImgID;
@property(nonatomic) unsigned int m_uiShakeTimes; // @synthesize m_uiShakeTimes;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)preInit;

@end

