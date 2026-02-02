//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonStoreItem;

@interface EmoticonPackageStateItem : NSObject
{
    long long m_state;
    EmoticonStoreItem *m_item;
    float m_process;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonStoreItem *m_item; // @synthesize m_item;
@property(nonatomic) float m_process; // @synthesize m_process;
@property(nonatomic) long long m_state; // @synthesize m_state;

@end

