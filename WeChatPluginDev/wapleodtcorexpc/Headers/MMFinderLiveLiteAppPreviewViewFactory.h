//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMFinderLiveLiteAppPreviewViewFactoryDataSource;

@interface MMFinderLiveLiteAppPreviewViewFactory : NSObject
{
    id <MMFinderLiveLiteAppPreviewViewFactoryDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveLiteAppPreviewViewFactoryDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)createArgsCodec;
- (id)createWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

