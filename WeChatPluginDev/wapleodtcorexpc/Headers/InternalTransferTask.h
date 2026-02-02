//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol InternalTransferTaskDelegate;

@interface InternalTransferTask : NSObject
{
    id <InternalTransferTaskDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <InternalTransferTaskDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)startTask;

@end

