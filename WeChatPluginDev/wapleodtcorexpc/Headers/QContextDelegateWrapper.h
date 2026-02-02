//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol QMapContextDelegate;

@interface QContextDelegateWrapper : NSObject
{
    id <QMapContextDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <QMapContextDelegate> delegate; // @synthesize delegate=_delegate;

@end

