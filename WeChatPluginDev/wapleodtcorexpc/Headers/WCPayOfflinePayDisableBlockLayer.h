//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayOfflinePayDisableBlockLayer : NSObject
{
    _Bool _is_show;
    unsigned int _block_layer_report_id;
    unsigned int _action_type;
    NSString *_tiny_app_username;
    NSString *_tiny_app_path;
    NSString *_url;
    NSArray *_text_info_array;
}

+ (void)removeDisableBlockLayerData;
+ (_Bool)saveDisableBlockLayerData:(id)arg1;
+ (id)getLocalDisableBlockLayerData;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_text_info_array;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_tiny_app_path;
+ (void)PBArrayAdd_tiny_app_username;
+ (void)PBArrayAdd_action_type;
+ (void)PBArrayAdd_is_show;
+ (void)PBArrayAdd_block_layer_report_id;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *text_info_array; // @synthesize text_info_array=_text_info_array;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *tiny_app_path; // @synthesize tiny_app_path=_tiny_app_path;
@property(retain, nonatomic) NSString *tiny_app_username; // @synthesize tiny_app_username=_tiny_app_username;
@property(nonatomic) unsigned int action_type; // @synthesize action_type=_action_type;
@property(nonatomic) _Bool is_show; // @synthesize is_show=_is_show;
@property(nonatomic) unsigned int block_layer_report_id; // @synthesize block_layer_report_id=_block_layer_report_id;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

