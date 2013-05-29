#ifndef OPTIONTOKENS_H
#define OPTIONTOKENS_H

/* The order of this does NOT matter, but do not give things specific values
 * or you will screw up the ability to count things properly */
enum e_OptionBaseToken {
	OT_SETTINGS_FILE,
	OT_NODISP,
	OT_AUTO,
	OT_RECOMPUTE_CRIT_ITER,
	OT_INNER_LOOP_RECOMPUTE_DIVIDER,
	OT_FIX_PINS,
	OT_FULL_STATS,
	OT_READ_PLACE_ONLY,
	OT_FAST,
	OT_CREATE_ECHO_FILE,
	OT_TIMING_ANALYSIS,
	OT_TIMING_ANALYZE_ONLY_WITH_NET_DELAY,
	OT_GENERATE_POST_SYNTHESIS_NETLIST,
	OT_INIT_T,
	OT_ALPHA_T,
	OT_EXIT_T,
	OT_INNER_NUM,
	OT_SEED,
	OT_PLACE_COST_EXP,
	OT_TD_PLACE_EXP_FIRST,
	OT_TD_PLACE_EXP_LAST,
	OT_PLACE_ALGORITHM,
	OT_TIMING_TRADEOFF,
	OT_ENABLE_TIMING_COMPUTATIONS,
	OT_BLOCK_DIST,
	OT_PLACE_CHAN_WIDTH,
	OT_MAX_ROUTER_ITERATIONS,
	OT_BB_FACTOR,
	OT_ROUTER_ALGORITHM,
	OT_FIRST_ITER_PRES_FAC,
	OT_INITIAL_PRES_FAC,
	OT_PRES_FAC_MULT,
	OT_ACC_FAC,
	OT_ASTAR_FAC,
	OT_MAX_CRITICALITY,
	OT_CRITICALITY_EXP,
	OT_BASE_COST_TYPE,
	OT_BEND_COST,
	OT_ROUTE_TYPE,
	OT_ROUTE_CHAN_WIDTH,
	OT_ROUTE_CHAN_TRIM,
	OT_ROUTE,
	OT_PLACE,
	OT_VERIFY_BINARY_SEARCH,
	OT_OUTFILE_PREFIX,
	OT_BLIF_FILE,
	OT_NET_FILE,
	OT_PLACE_FILE,
	OT_ROUTE_FILE,
	OT_SDC_FILE,
	OT_GLOBAL_CLOCKS,
	OT_HILL_CLIMBING_FLAG,
	OT_SWEEP_HANGING_NETS_AND_INPUTS,
	OT_SKIP_CLUSTERING,
	OT_ALLOW_UNRELATED_CLUSTERING,
	OT_ALLOW_EARLY_EXIT,
	OT_CONNECTION_DRIVEN_CLUSTERING,
	OT_TIMING_DRIVEN_CLUSTERING,
	OT_CLUSTER_SEED,
	OT_ALPHA_CLUSTERING,
	OT_BETA_CLUSTERING,
	OT_RECOMPUTE_TIMING_AFTER,
	OT_CLUSTER_BLOCK_DELAY,
	OT_INTRA_CLUSTER_NET_DELAY,
	OT_INTER_CLUSTER_NET_DELAY,
	OT_PACK,
	OT_PACKER_ALGORITHM,
	OT_POWER,
	OT_ACTIVITY_FILE,
	OT_POWER_OUT_FILE,
	OT_CMOS_TECH_BEHAVIOR_FILE,
	OT_BASE_UNKNOWN /* Must be last since used for counting enum items */
};

enum e_OptionArgToken {
	OT_ON,
	OT_OFF,
	OT_RANDOM,
	OT_BOUNDING_BOX,
	OT_NET_TIMING_DRIVEN,
	OT_PATH_TIMING_DRIVEN,
	OT_BREADTH_FIRST,
	OT_TIMING_DRIVEN,
	OT_NO_TIMING,
	OT_INTRINSIC_DELAY,
	OT_DELAY_NORMALIZED,
	OT_DEMAND_ONLY,
	OT_GLOBAL,
	OT_DETAILED,
	OT_TIMING,
	OT_MAX_INPUTS,
	OT_GREEDY,
	OT_LP,
	OT_BRUTE_FORCE,
	OT_ARG_UNKNOWN /* Must be last since used for counting enum items */
};

extern struct s_TokenPair OptionBaseTokenList[];
extern struct s_TokenPair OptionArgTokenList[];

#endif
