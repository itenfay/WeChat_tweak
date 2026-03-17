//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiteAppViewController, NSObject;
@protocol FlutterBinaryMessenger;

@protocol MMFinderLiveLiteAppPreviewViewFactoryDataSource <NSObject>
- (MMLiteAppViewController *)liteApp;
- (NSObject<FlutterBinaryMessenger> *)messenger;
@end

